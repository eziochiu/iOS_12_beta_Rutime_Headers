/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata> {
    NSDictionary * _dictionary;
    NSDate * _displayDate;
}

@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, retain) NSDate *displayDate;
@property (nonatomic, readonly) bool isTreatedAsNew;
@property (nonatomic, readonly) NSString *storyType;

- (void).cxx_destruct;
- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)displayDate;
- (id)initWithDictionary:(id)arg1;
- (bool)isTreatedAsNew;
- (void)setDictionary:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (id)storyType;

@end
