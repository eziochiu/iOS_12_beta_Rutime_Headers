/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHTTPDevice : HMFObject <HMFLogging> {
    NSUUID * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)shortDescription;

@end
