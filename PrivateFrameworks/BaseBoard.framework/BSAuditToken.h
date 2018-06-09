/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAuditToken : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSString * _bundleID;
}

@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } realToken;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tokenFromAuditTokenRef:(struct { unsigned int x1[8]; }*)arg1;
+ (id)tokenFromMachMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; }*)arg1;
+ (id)tokenFromNSXPCConnection:(id)arg1;
+ (id)tokenFromXPCConnection:(id)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;

- (void).cxx_destruct;
- (id)_bundleIDGeneratingIfNeeded:(bool)arg1;
- (id)_dataWithValue:(id)arg1;
- (id)_valueFromData:(id)arg1 ofType:(const char *)arg2;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)hasEntitlement:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (struct { unsigned int x1[8]; })realToken;
- (void)setBundleID:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
