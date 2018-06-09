/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSURL * _objectID;
    NSNumber * _uid;
}

@property (nonatomic, retain) NSURL *objectID;
@property (nonatomic, copy) NSNumber *uid;

+ (bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (void)setUid:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;
- (id)uid;

@end