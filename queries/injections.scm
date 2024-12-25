; directives are standalone tags like '<%= @x %>'
;
; partial_expression_values are elixir code that is part of an expression that
; spans multiple directive nodes, so they must be combined. For example:
;     <%= if true do %>
;       <p>hello, tree-sitter!</p>
;     <% end %>
((directive
  [
    (partial_expression_value)
    (ending_expression_value)
  ] @injection.content)
 (#set! injection.language "elixir")
 (#set! injection.include-children)
 (#set! injection.combined))

; Regular expression_values do not need to be combined
((directive (expression_value) @injection.content)
 (#set! injection.language "elixir"))

; expressions live within HTML tags, and do not need to be combined
;     <link href={ Routes.static_path(..) } />
((expression (expression_value) @injection.content)
 (#set! injection.language "elixir"))

; Sintax highlight for style and javascript tags
((tag
  (start_tag
      (tag_name) @tag_name (#eq? @tag_name "script"))
  (text)
  (end_tag)
) @injection.content
 (#offset! @injection.content 1 0 0 -9)
 (#set! injection.language "javascript")
 (#set! injection.include-children)
 (#set! injection.combined)
)

((tag
  (start_tag
      (tag_name) @tag_name (#eq? @tag_name "style"))
  (text)
  (end_tag)
) @injection.content
 (#offset! @injection.content 1 0 0 -9)
 (#set! injection.language "css")
 (#set! injection.include-children)
 (#set! injection.combined)
)
