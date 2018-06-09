/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXVmlReadClient : NSObject <OAVReadClient>

+ (void)copyFromDrawable:(id)arg1 toContent:(id)arg2;
+ (bool)floating:(id)arg1;
+ (int)horizontalPosition:(id)arg1;
+ (void)initialize;
+ (void)readClientDataFromGroup:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (void)readFromDrawable:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toContent:(id)arg2;
+ (void)readTextWrappingFromParent:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toAnchor:(id)arg2;
+ (int)relativeHorizontalPosition:(id)arg1;
+ (int)relativeVerticalPosition:(id)arg1;
+ (int)verticalPosition:(id)arg1;
+ (int)vmlSupportLevel;
+ (double)wrapDistanceBottom:(id)arg1;
+ (double)wrapDistanceLeft:(id)arg1;
+ (double)wrapDistanceRight:(id)arg1;
+ (double)wrapDistanceTop:(id)arg1;
+ (int)zIndex:(id)arg1;

@end
