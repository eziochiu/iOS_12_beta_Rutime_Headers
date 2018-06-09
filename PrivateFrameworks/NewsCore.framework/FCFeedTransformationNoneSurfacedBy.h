/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationNoneSurfacedBy : NSObject <FCFeedTransforming> {
    NSDictionary * _feedContextByFeedID;
    NSSet * _tagIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *feedContextByFeedID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *tagIDs;

+ (id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2;

- (void).cxx_destruct;
- (id)feedContextByFeedID;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setTagIDs:(id)arg1;
- (id)tagIDs;
- (id)transformFeedItems:(id)arg1;

@end
