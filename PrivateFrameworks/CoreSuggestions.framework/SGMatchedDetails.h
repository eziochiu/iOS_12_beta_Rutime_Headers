/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _detailTokenMap;
    NSMutableDictionary * _tokenDetailMap;
}

+ (id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_contactDetailFromContact:(id)arg1 column:(unsigned int)arg2 detailEntityId:(id)arg3;
- (void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
- (bool)isEqualToMatchedDetails:(id)arg1;
- (id)matchedDetailsForToken:(id)arg1;
- (id)tokensForDetail:(id)arg1;

@end
