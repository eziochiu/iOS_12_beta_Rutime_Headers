/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFWeakContainerSentenal : NSObject {
    PFWeakContainer * _container;
}

+ (void)initialize;

- (void)associateWithObject:(id)arg1;
- (void)clearContainer;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (bool)isAssociatedWithObject:(id)arg1;
- (oneway void)release;
- (void)removeAssociationWithObject:(id)arg1;

@end
