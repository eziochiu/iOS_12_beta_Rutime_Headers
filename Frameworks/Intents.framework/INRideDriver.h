/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRideDriver : INPerson <INImageProxyInjecting, INRideDriverExport, NSCopying, NSSecureCoding> {
    NSString * _rating;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSString *rating;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(bool)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 aliases:(id)arg8;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 rating:(id)arg7 phoneNumber:(id)arg8;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 image:(id)arg3 rating:(id)arg4 phoneNumber:(id)arg5;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 isMe:(bool)arg7;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5 phoneNumber:(id)arg6;
- (id)initWithPhoneNumber:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 rating:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)rating;

@end
