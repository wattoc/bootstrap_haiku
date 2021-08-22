# bootstrap_haiku
BlitzMax NG bootstrap for Haiku x64

Bootstrap files for getting BlitzMax NG running on Haiku.

You can build these yourself with an existing BlitzMax NG:

1. Copy the **bootstrap.cfg** from **BlitzMax/src/bootstrap.con**f to **BlitzMax/bin**
2. Edit this file, under the other #t entries, add a new t entry such as this
```t haiku x64```
3. run **bmk makebootstrap** this will generate the majority of files included in this repository

At this point you can copy the bcc and bmk folders across to your Haiku system.

On Haiku:

1. Navigate to the bcc folder through terminal.
2. In terminal: ```chmod +x bcc.console.release.haiku.x64.build```
3. In terminal: ```./bcc.console.release.haiku.x64.build```

This should build bcc, then

1. Navigate to the bmk folder through terminal.
2. In terminal: ```chmod +x bmk.console.release.haiku.x64.build```
3. In terminal: ```./bmk.console.release.haiku.x64.build```

This should build bmk

These two files can then be copied over to a base BlitzMax NG install into the **bin** folder.  These are your base building blocks to getting a full BlitzMax NG going.
