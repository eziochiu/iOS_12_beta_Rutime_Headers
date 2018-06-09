/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARWorkspaceInfo : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSArray * _applications;
    NSNumber * _sequenceNumber;
    NSArray * _standaloneGlances;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSArray *applications;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (nonatomic, readonly) NSArray *standaloneGlances;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)applications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3;
- (id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)sequenceNumber;
- (id)standaloneGlances;

@end
