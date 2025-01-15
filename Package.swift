// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterHeex",
    products: [
        .library(name: "TreeSitterHeex", targets: ["TreeSitterHeex"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHeex",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHeexTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHeex",
            ],
            path: "bindings/swift/TreeSitterHeexTests"
        )
    ],
    cLanguageStandard: .c11
)
