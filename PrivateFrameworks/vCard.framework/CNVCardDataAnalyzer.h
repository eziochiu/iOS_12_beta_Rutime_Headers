/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardDataAnalyzer : NSObject

+ (struct CNVCardDataAnalysis { unsigned long long x1; bool x2; })analyzeData:(id)arg1;
+ (id)data:(id)arg1 byPrependingData:(id)arg2;
+ (unsigned char)data:(id)arg1 byteAtIndex:(unsigned long long)arg2;
+ (bool)data:(id)arg1 containsParam:(id)arg2 value:(id)arg3 encoding:(unsigned long long)arg4;
+ (bool)data:(id)arg1 containsString:(id)arg2 encoding:(unsigned long long)arg3;
+ (bool)data:(id)arg1 containsSubdata:(id)arg2;
+ (bool)data:(id)arg1 hasPrefix:(id)arg2;
+ (bool)data:(id)arg1 isVersion30WithPrefix:(id)arg2 encoding:(unsigned long long)arg3;
+ (bool)tryUTF16BEBOMVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF16BEVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF16ByInferrence:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF16LEBOMVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF16LEVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF16WithByteOrderMarker:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryUTF8VCard:(id)arg1 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg2;
+ (bool)tryVCardEncoding:(unsigned long long)arg1 data:(id)arg2 analysis:(struct CNVCardDataAnalysis { unsigned long long x1; bool x2; }*)arg3;

@end
