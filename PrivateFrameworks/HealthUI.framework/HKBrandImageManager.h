/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBrandImageManager : NSObject {
    NSCache * _fetchedImages;
    NSOperationQueue * _fileOperationQueue;
    HKHealthRecordsStore * _healthRecordsStore;
    NSMutableDictionary * _outstandingRequests;
}

@property (nonatomic, retain) NSCache *fetchedImages;
@property (retain) NSOperationQueue *fileOperationQueue;
@property (nonatomic, retain) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;

+ (id)_fetchOrCreateSalt;
+ (double)defaultLogoDimension;
+ (id)imageManagerWithHealthRecordsStore:(id)arg1;
+ (id)standardTableViewCellSpacerImage;

- (void).cxx_destruct;
- (id)_hashedSaltedStringFromString:(id)arg1;
- (id)_logoURLForBrand:(id)arg1;
- (id)_scaleKeyForCurrentDevice;
- (void)_writeImageData:(id)arg1 brand:(id)arg2;
- (void)cacheFeaturedBrandLogosWithCompletion:(id /* block */)arg1;
- (void)dispatchResponsesForBrand:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)fetchLogoForBrand:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchedImages;
- (id)fileOperationQueue;
- (id)healthRecordsStore;
- (id)init;
- (id)loadStoredLogoForBrand:(id)arg1;
- (void)onMainQueue:(id /* block */)arg1;
- (id)outstandingRequests;
- (void)processFetchResponseWithData:(id)arg1 error:(id)arg2 brand:(id)arg3;
- (void)retrieveLogoForBrand:(id)arg1 size:(double)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setFetchedImages:(id)arg1;
- (void)setFileOperationQueue:(id)arg1;
- (void)setHealthRecordsStore:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;

@end
