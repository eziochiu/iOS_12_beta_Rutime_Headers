/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMComposeRecipient : NSObject <NSCopying, PXTapToRadar> {
    <PXCMMPersonSuggestion> * _personSuggestion;
    PXRecipient * _recipient;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *diagnosticDictionary;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXCMMPersonSuggestion> *personSuggestion;
@property (nonatomic, readonly) PXRecipient *recipient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticDictionary;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithPersonSuggestion:(id)arg1;
- (id)initWithRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personSuggestion;
- (id)recipient;

@end
