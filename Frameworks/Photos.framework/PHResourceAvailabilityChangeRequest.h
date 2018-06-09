/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityChangeRequest : PHResourceAvailabilityRequest {
    PHResourceAvailabilityDataStoreManager * _dataStoreManager;
    <PHResourceAvailabilityChangeRequestDelegate> * _delegate;
    NSError * _error;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _networkAccessAllowed;
    bool  _success;
    bool  _transient;
    bool  _wantsProgress;
}

@property (nonatomic) <PHResourceAvailabilityChangeRequestDelegate> *delegate;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (getter=isTransient, nonatomic) bool transient;
@property (nonatomic) bool wantsProgress;

- (void).cxx_destruct;
- (void)_cplDownloadFinishedNotification:(id)arg1;
- (void)_cplDownloadStatusNotification:(id)arg1;
- (void)cancel;
- (id)delegate;
- (id)initWithAssetObjectID:(id)arg1 resourceIdentity:(id)arg2;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isNetworkAccessAllowed;
- (bool)isTransient;
- (id)plistDictionary;
- (void)runDaemonSide;
- (void)setDelegate:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setTransient:(bool)arg1;
- (void)setWantsProgress:(bool)arg1;
- (bool)wantsProgress;

@end
