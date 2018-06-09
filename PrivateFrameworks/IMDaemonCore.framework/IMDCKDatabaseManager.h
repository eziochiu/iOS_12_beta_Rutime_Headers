/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKDatabaseManager : NSObject {
    CKContainer * _manateeContainer;
    IMDCKMockDatabase * _mockDatabase;
    CKContainer * _nonHSA2ManateeContainer;
    CKContainer * _stingRayContainer;
    bool  _useStingRay;
}

@property (nonatomic, readonly) CKContainer *manateeContainer;
@property (nonatomic, readonly) IMDCKMockDatabase *mockDatabase;
@property (nonatomic, readonly) CKContainer *nonHSA2ManateeContainer;
@property (nonatomic, readonly) CKContainer *stingRayContainer;
@property (nonatomic, readonly) CKContainer *truthContainer;
@property (nonatomic) bool useStingRay;

+ (id)sharedInstance;

- (bool)_useMockCloudKit;
- (void)dealloc;
- (id)init;
- (id)manateeContainer;
- (id)manateeDataBase;
- (id)mockDatabase;
- (id)nonHSA2ManateeContainer;
- (id)nonHSA2ManateeDatabase;
- (void)setUseStingRay:(bool)arg1;
- (id)stingRayContainer;
- (id)stingRayDatabase;
- (id)truthContainer;
- (id)truthDatabase;
- (bool)useStingRay;

@end
