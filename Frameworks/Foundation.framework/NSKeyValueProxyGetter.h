/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueProxyGetter : NSKeyValueGetter {
    Class  _proxyClass;
}

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 proxyClass:(Class)arg3;
- (Class)proxyClass;

@end