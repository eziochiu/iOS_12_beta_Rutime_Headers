/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceAvailabilityDataStoreManager : NSObject {
    <PLResourceDataStore> * _dataStore;
    bool  _isCancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _requestID;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (bool)isCancelled;
- (void)makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 options:(id)arg3 managedObjectContext:(id)arg4 resultHandler:(id /* block */)arg5;

@end
