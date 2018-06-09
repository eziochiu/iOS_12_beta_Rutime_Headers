/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitMathMLMAction : EQKitMathMLNode <EQKitMathMLNode> {
    EQKitMathMLNode * mExpression;
}

- (void)dealloc;
- (id)initFromXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parser:(id)arg2;
- (bool)isEmbellishedOperator;
- (struct Schemata { int (**x1)(); int x2; id x3; })layoutSchemata;
- (const struct set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum> > { }*)mathMLAttributes;
- (id)operatorCore;

@end
