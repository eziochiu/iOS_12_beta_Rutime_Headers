/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy> {
    NSSet * _meContactIdentifiersFound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *meContactIdentifiersFound;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1;
- (bool)isMeContact:(id)arg1;
- (void)meContactChangedInStore:(id)arg1;
- (id)meContactIdentifiers;
- (id)meContactIdentifiersFound;
- (void)setMeContactIdentifiersFound:(id)arg1;

@end
