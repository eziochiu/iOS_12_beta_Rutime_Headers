/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface XMLWrapperElementFactory : NSObject

+ (Class)elementClassByTagName:(id)arg1;
+ (unsigned long long)elementTypeByTagName:(id)arg1;
+ (void)initialize;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2;
+ (id)sharedInstance;

- (Class)classForXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 error:(id*)arg2;

@end
