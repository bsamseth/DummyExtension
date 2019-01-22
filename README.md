# Dummy Extension

```
> # Optionally setup a virtualenv, for instance with pipenv
> pipenv install
> pipenv shell
> # Install the package
> python setup.py install
```

Then the follwing session should be possible:

```ipython
In [1]: import mypackage

In [3]: mypackage.subA.foo(1, 3)
Out[3]: 4

In [4]: mypackage.subB.bar(1, 3)
Out[4]: -2
```
