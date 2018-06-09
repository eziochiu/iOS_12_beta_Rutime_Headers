/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMutablePanoramaCaptureRequest : CAMPanoramaCaptureRequest <CAMMutableCaptureRequestEncodingBehavior, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestOrigin, CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestPower>

@property (nonatomic) unsigned int assertionIdentifier;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long captureMode;
@property (nonatomic) long long captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long deferredPersistenceOptions;
@property (nonatomic) <CAMPanoramaCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLHeading *heading;
@property (nonatomic, copy) NSURL *localDestinationURL;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) long long origin;
@property (nonatomic) long long persistenceOptions;
@property (nonatomic, copy) NSString *persistenceUUID;
@property (nonatomic) long long photoEncodingBehavior;
@property (nonatomic) long long pressType;
@property (nonatomic) unsigned short sessionIdentifier;
@property (nonatomic) bool shouldDelayRemotePersistence;
@property (nonatomic) bool shouldExtractDiagnosticsFromMetadata;
@property (nonatomic) bool shouldPersistDiagnosticsToSidecar;
@property (readonly) Class superclass;
@property (nonatomic) long long temporaryPersistenceOptions;
@property (nonatomic) long long videoEncodingBehavior;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssertionIdentifier:(unsigned int)arg1;
- (void)setCaptureDevice:(long long)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setCaptureOrientation:(long long)arg1;
- (void)setDeferredPersistenceOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setLocalDestinationURL:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setPersistenceOptions:(long long)arg1;
- (void)setPersistenceUUID:(id)arg1;
- (void)setPhotoEncodingBehavior:(long long)arg1;
- (void)setPressType:(long long)arg1;
- (void)setSessionIdentifier:(unsigned short)arg1;
- (void)setShouldDelayRemotePersistence:(bool)arg1;
- (void)setShouldExtractDiagnosticsFromMetadata:(bool)arg1;
- (void)setShouldPersistDiagnosticsToSidecar:(bool)arg1;
- (void)setTemporaryPersistenceOptions:(long long)arg1;

@end
