/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor {
    bool  _disableFiltering;
    bool  _disableGroupMerging;
    bool  _enableSingletonGroups;
}

@property (nonatomic) bool disableFiltering;
@property (nonatomic) bool disableGroupMerging;
@property (nonatomic) bool enableSingletonGroups;

+ (id)descriptorWithContext:(id)arg1;
+ (id)descriptorWithContext:(id)arg1 tag:(id)arg2;

- (bool)disableFiltering;
- (bool)disableGroupMerging;
- (bool)enableSingletonGroups;
- (id)feedGroupEmittersWithConfiguration:(id)arg1;
- (void)setDisableFiltering:(bool)arg1;
- (void)setDisableGroupMerging:(bool)arg1;
- (void)setEnableSingletonGroups:(bool)arg1;

@end
