/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyedRemoteArchiver : HMFObject {
    NSKeyedArchiver * _archiver;
    NSString * _transportType;
}

@property (nonatomic, retain) NSKeyedArchiver *archiver;
@property (nonatomic, retain) NSString *transportType;

- (void).cxx_destruct;
- (void)__configure;
- (id)archiver;
- (void)dealloc;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedData;
- (void)finishEncoding;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(bool)arg1 remoteGateway:(bool)arg2 remoteUserIsAdministrator:(bool)arg3 user:(id)arg4 supportedFeatures:(id)arg5;
- (void)setArchiver:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;

@end
