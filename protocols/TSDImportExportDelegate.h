/* made by EzioChiu.
 */

@protocol TSDImportExportDelegate <NSObject>

@required

- (void)addWarning:(TSUWarning *)arg1;
- (void)removeWarning:(TSUWarning *)arg1;
- (NSArray *)warnings;

@optional

- (void)addIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 incompatibleData:(TSPData *)arg2 compatibilityLevel:(long long)arg3;
- (NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnAllDevices;
- (NSMapTable *)incompatibleMediaContainersWithDataUnsupportedOnThisDevice;
- (bool)isBrowsingVersions;
- (void)removeIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1;
- (void)replaceIncompatibleMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg1 withNewMediaContainer:(id <TSDCompatibilityAwareMediaContainer>)arg2;

@end
