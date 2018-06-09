/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSBinder : NSObject {
    id  _boundObject;
    NSCountedSet * _currentlyChangingBindings;
    NSMutableDictionary * _establishedBindings;
    bool  _establishmentProhibited;
}

@property (nonatomic, readonly) id boundObject;
@property (nonatomic, retain) NSCountedSet *currentlyChangingBindings;
@property (nonatomic, retain) NSMutableDictionary *establishedBindings;
@property (getter=isEstablishmentProhibited, nonatomic) bool establishmentProhibited;

- (void).cxx_destruct;
- (id)_infoForBinding:(id)arg1;
- (id)boundObject;
- (id)currentlyChangingBindings;
- (void)dealloc;
- (void)establishBinding:(id)arg1 withInfo:(id)arg2;
- (id)establishedBindings;
- (id)init;
- (id)initWithBoundObject:(id)arg1;
- (bool)isEstablishmentProhibited;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCurrentlyChangingBindings:(id)arg1;
- (void)setEstablishedBindings:(id)arg1;
- (void)setEstablishmentProhibited:(bool)arg1;
- (void)setValue:(id)arg1 forBinding:(id)arg2;
- (void)tearDownBinding:(id)arg1;
- (id)valueForBinding:(id)arg1;

@end
