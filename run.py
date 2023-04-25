import replicate
output = replicate.run(
    "yuval-alaluf/sam:9222a21c181b707209ef12b5e0d7e94c994b58f01c7b2fec075d2e892362f13c",
    input={"image": open("./zxh.jpeg", "rb"),"target_age":"default"}
)
print(output)
