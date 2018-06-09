/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination {
    HMDAccountHandle * _handle;
    bool  _multicast;
}

@property (readonly, copy) HMDAccountHandle *handle;
@property (getter=isMulticast, readonly) bool multicast;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMulticast;
- (id)remoteDestinationString;
- (id)shortDescription;

@end
