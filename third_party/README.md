# How to add new dependencies?

New dependencies must have its own directory, if the dependency has the name `dummy`, then under this directory a new one called `dummy`, and its content could be two files `BUILD` and `dummy.bzl`, e.g.:

```
- third_party
-- dummy
--- BUILD
--- dummy.bzl
```

Then, in `dummy.bzl` the content must be:
```python
def dummy():
    <load_statement>
```

After doing these steps, to load the dependency in the global environment the file `dependencies.bzl` must be edited to load the new dependency.
