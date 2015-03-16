# assignment 6.5

text = "X-DSPAM-Confidence:    0.8475";

semic = text.find(':')

endq = len(text)

snip = text[semic + 1 :endq + 1]

cleansnip = snip.lstrip()

numb = float(cleansnip)

print numb
