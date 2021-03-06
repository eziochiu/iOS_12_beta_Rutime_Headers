/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionAdvertiser : NSObject <NSNetServiceDelegate> {
    DMFControlSessionIdentifier * _classSessionIdentifier;
    <CRKClassSessionAdvertiserDelegate> * _delegate;
    bool  _includeNearbyStudents;
    NSTimer * mBeaconToggleTimer;
    NSNetService * mNetService;
    NSString * mServiceType;
    CRKClassSessionBeacon * mSessionBeacon;
}

@property (nonatomic, copy) DMFControlSessionIdentifier *classSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionAdvertiserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeNearbyStudents;
@property (nonatomic, readonly) bool isAdvertising;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)classSessionIdentifier;
- (id)delegate;
- (bool)includeNearbyStudents;
- (id)init;
- (id)initWithServiceType:(id)arg1;
- (id)instructorSocketOptions;
- (bool)isAdvertising;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)registerDefaults;
- (void)scheduleBeaconToggle:(id)arg1;
- (void)setClassSessionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludeNearbyStudents:(bool)arg1;
- (void)startClassBeacon;
- (void)stopBeacon;
- (void)updateSessionBeacon;

@end
