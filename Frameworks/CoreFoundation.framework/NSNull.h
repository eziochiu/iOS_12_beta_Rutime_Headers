/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSNull : NSObject <AFSecurityDigestibleChunksProviding, CAAction, NSCopying, NSSecureCoding, PQLBindable, SiriCoreSQLiteValue, TSDMixing, TSDPathPainter, TSSPropertyValueArchiving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)null;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (id)cl_json_serializeKey;
- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_intents_readableDescriptionForLanguage:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_fakeNil;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)sfu_appendJsonStringToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)appendJsonStringToString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)instanceWithArchive:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithArchive:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)saveToArchive:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; double x5; }*)arg1 archiver:(id)arg2;
- (void)tsch_saveToProtobufString:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)arg1;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
