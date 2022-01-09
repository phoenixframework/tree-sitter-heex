(doctype) @constant

; HEEx attributes are highlighted as HTML attributes
(attribute_name) @attribute
[
  (attribute_value)
  (quoted_attribute_value)
] @string

; HEEx tags are highlighted as HTML
(tag_name) @tag

; HEEx components are highlighted as types (Elixir modules)
(component_name) @module

[
  "/>"
  "<!"
  "<"
  "</"
  ">"
] @punctuation.bracket

[
  "<%"
  "<%#"
  "<%%="
  "<%="
  "%>"
  "{"
  "}"
] @keyword

"=" @operator

(comment) @comment

(ERROR) @error
