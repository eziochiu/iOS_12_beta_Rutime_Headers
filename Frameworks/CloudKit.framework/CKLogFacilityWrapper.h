/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKLogFacilityWrapper : NSObject {
    NSObject<OS_os_log> * _facility;
    NSString * _facilityName;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *facility;
@property (nonatomic, readonly) NSString *facilityName;

- (void).cxx_destruct;
- (id)facility;
- (id)facilityName;
- (id)initWithFacility:(id)arg1 facilityName:(id)arg2;

@end
