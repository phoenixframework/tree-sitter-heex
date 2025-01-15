import XCTest
import SwiftTreeSitter
import TreeSitterHeex

final class TreeSitterHeexTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_heex())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Heex grammar")
    }
}
