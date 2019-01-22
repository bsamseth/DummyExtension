# Dummy Extension
This is a [minimal, complete and verifiable example](https://stackoverflow.com/help/mcve) to go along with [this stackoverflow question](https://stackoverflow.com/q/54317280/3377926).

```
> # Fetch Pybind11
> git submodule init
> git submodule update
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
