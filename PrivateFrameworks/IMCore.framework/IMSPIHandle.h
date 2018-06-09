/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMSPIHandle : NSObject {
    NSString * _address;
    NSString * _countryCode;
    bool  _haveFetchedIMPerson;
    IMPerson * _imPerson;
    bool  _isMe;
}

@property (readonly) NSString *address;
@property (readonly) NSString *businessName;
@property (readonly) NSString *cnContactID;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *displayName;
@property (readonly) bool isBusiness;
@property (readonly) bool isMe;

- (void).cxx_destruct;
- (id)address;
- (id)businessName;
- (id)cnContactID;
- (id)countryCode;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(bool)arg3;
- (bool)isBusiness;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (id)person;

@end
