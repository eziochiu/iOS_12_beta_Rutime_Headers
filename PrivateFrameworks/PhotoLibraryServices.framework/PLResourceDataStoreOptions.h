/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceDataStoreOptions : NSObject {
    bool  _assumeNoExistingResources;
    bool  _baseKeyOnExistingData;
}

@property (nonatomic) bool assumeNoExistingResources;
@property (nonatomic) bool baseKeyOnExistingData;

- (bool)assumeNoExistingResources;
- (bool)baseKeyOnExistingData;
- (void)setAssumeNoExistingResources:(bool)arg1;
- (void)setBaseKeyOnExistingData:(bool)arg1;

@end
