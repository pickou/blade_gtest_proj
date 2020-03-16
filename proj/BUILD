import os

this_dir = os.getcwd()

sources = []

for source in os.listdir(os.path.join(this_dir, 'proj', 'src')):
    if(source.endswith('.cc')):
        sources.append('src/{0}'.format(source))

cc_library(
    name = 'libproj',
    srcs = sources,
)

cc_binary(
    name = 'testbin',
    srcs = 'src/try/plus_try.cc',
    deps = [
        ':libproj'
    ],
)

for source in os.listdir(os.path.join(this_dir, 'proj', 'test')):
    if(source.endswith('.cc')):
        cc_test(
            name = source[:-3],
            srcs = 'test/{0}'.format(source),
            deps = [
                ':libproj',
            ]
        )

