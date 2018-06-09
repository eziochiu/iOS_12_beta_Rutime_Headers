/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming> {
    unsigned long long  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;

@end
