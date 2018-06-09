/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAExportableDocumentType : NSObject {
    TSUColor * _exportFormatChooserItemTextColor;
    NSString * _exportProgressMessage;
    NSString * _localizedName;
    NSString * _type;
}

@property (nonatomic, readonly) TSUColor *exportFormatChooserItemTextColor;
@property (nonatomic, readonly) NSString *exportProgressMessage;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *type;

+ (id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3;
+ (id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)exportFormatChooserItemTextColor;
- (id)exportProgressMessage;
- (id)initWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4;
- (id)localizedName;
- (id)type;

@end
