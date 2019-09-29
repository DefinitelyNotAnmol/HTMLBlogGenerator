# HTMLBlogGenerator (Not Completed Yet)

Automatic HTML code generator for the blogs for my personal website (https://definitelynotanmol.github.io)

## Documentation

Save an file using tags mentioned below with the extension '.admd'
also keep all the images in the same directory as .admd file
make sure each new tag starts with a whitespace (which can be new line, tab, or a space).

after executing the program, this program generates two things first < blogname >.html and a folder named < blogname > which contains all the images linked to the code in html.

To add the blog to the site just copy the html code to static/blog folder and images folder to the images/Blog folder.

### Title (Required)

Main Title for the Blog

```
\Title
    Title
\
```

### Short Title (Required)

Short Title for the Blog

```
\STitle
    ShortTitle
\
```

### Date (Required)

Date of publishing

```
\Date
    Feb 07, 2019
\

\Date Auto\  **This will generate automatic date, according to the date of compilation of the file**
```

### Tag (Required)

Tags for topic of the blog

```
\Tag
    Design Resources, Adobe Illustrator
\
```

### MainImage (Required [1200 x 800])

Main Blog Image

```
\MImage
    image.jpg
\
```

### Image (Optional)

Images used inside the blog

```
\Image
    image.jpg
\
```

### Paragraph (Optional)

Paragraph text

```
\Para
    This is the format for paragraph text
\
```

### BlockQuote (Optional)

To add BlockQoute

```
\Block
    This is the block quote text
\
```

### Bullets (Optional)

Add unordered list

```
\Bullets
    firstline
    second line
\
```

### NumberedList (Optional)

Add ordered list

```
\List
    firstline
    secondline
\
```

### Bold (Optional)

Bold the text

```
\Bold
    text
\
```

### Italic (Optional)

Italices the text

```
\Italic
    text
\
```

### Underline (Optional)

Underline the text

```
\Underline
    text
\
```

### External Links (Optional)

Add external links

```
\Link
    "text"
    "link"
\
```

### Author (Required)

Sign the blog by adding your name

```
\Sign
    Anmol Jain
\
```
