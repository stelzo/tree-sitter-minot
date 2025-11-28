import XCTest
import SwiftTreeSitter
import TreeSitterMinot

final class TreeSitterMinotTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_minot())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Minot grammar")
    }
}
