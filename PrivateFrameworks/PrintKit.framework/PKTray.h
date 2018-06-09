/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKTray : NSObject {
    NSDictionary * _trayDict;
}

@property (readonly) bool isEmpty;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *name;
@property (retain) NSDictionary *trayDict;

+ (id)filter:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)trayWithString:(id)arg1 andMediaSource:(id)arg2;
+ (id)traysWithAttrs:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 andMediaSource:(id)arg2;
- (bool)isEmpty;
- (id)localizedName;
- (id)name;
- (void)setTrayDict:(id)arg1;
- (id)trayDict;

@end
