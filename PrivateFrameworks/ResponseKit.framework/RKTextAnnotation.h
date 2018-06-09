/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKTextAnnotation : NSObject {
    bool  _machineGenerated;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    unsigned long long  _type;
}

@property bool machineGenerated;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property unsigned long long type;

- (unsigned long long)hash;
- (id)init;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 andType:(unsigned long long)arg2 machineGenerated:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)machineGenerated;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setMachineGenerated:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
