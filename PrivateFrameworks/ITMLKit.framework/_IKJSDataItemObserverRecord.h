/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKJSDataItemObserverRecord : NSObject {
    <IKJSDataItemObserver> * _observer;
    struct { 
        bool hasDidChangePropertyPath; 
        bool hasDidChangeSubPropertyPath; 
    }  _observerFlags;
    NSString * _observerHash;
    NSString * _pathString;
    bool  _subscriptWildcard;
}

@property (nonatomic, readonly) <IKJSDataItemObserver> *observer;
@property (nonatomic, readonly) NSString *observerHash;
@property (nonatomic, readonly) NSString *pathString;
@property (getter=isSubscriptWildcard, nonatomic, readonly) bool subscriptWildcard;

+ (id)hashForObserver:(id)arg1;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 pathString:(id)arg2 subscriptWildcard:(bool)arg3;
- (bool)isAffectedByPropertyPathWithString:(id)arg1;
- (bool)isAffectedByPropertyPathWithString:(id)arg1 subscript:(long long)arg2;
- (bool)isSubscriptWildcard;
- (id)observer;
- (id)observerHash;
- (id)pathString;

@end
