
# ==========================================
#   Copyright (c) 2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

include(FetchContent)
FetchContent_Declare(
    dynamic_static.vk-xml-parser
    GIT_REPOSITORY "https://github.com/dynamic-static/dynamic_static.vk-xml-parser.git"
    GIT_TAG trunk
    GIT_PROGRESS TRUE
    FETCHCONTENT_UPDATES_DISCONNECTED
)
FetchContent_MakeAvailable(dynamic_static.vk-xml-parser)
