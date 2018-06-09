/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding> {
    NSString * _identityInfo;
    NSMutableArray * _notFoundZoneIDs;
    NSMutableDictionary * _pcsInfoByZoneID;
    NSString * _serviceIdentityInfo;
}

@property (nonatomic, retain) NSString *identityInfo;
@property (nonatomic, retain) NSMutableArray *notFoundZoneIDs;
@property (nonatomic, retain) NSMutableDictionary *pcsInfoByZoneID;
@property (nonatomic, retain) NSString *serviceIdentityInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identityInfo;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)notFoundZoneIDs;
- (id)pcsInfoByZoneID;
- (id)serviceIdentityInfo;
- (void)setIdentityInfo:(id)arg1;
- (void)setNotFoundZoneIDs:(id)arg1;
- (void)setPcsInfoByZoneID:(id)arg1;
- (void)setServiceIdentityInfo:(id)arg1;

@end
