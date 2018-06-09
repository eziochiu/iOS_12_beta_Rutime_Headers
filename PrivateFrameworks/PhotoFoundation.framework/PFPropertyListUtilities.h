/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFPropertyListUtilities : NSObject

+ (id)_filterArray:(id)arg1 block:(id /* block */)arg2;
+ (id)_filterDictionary:(id)arg1 block:(id /* block */)arg2;
+ (id)arrayFromEncodedData:(id)arg1;
+ (bool)canEncodeInPropertyList:(id)arg1;
+ (id)dictionaryFromEncodedData:(id)arg1;
+ (id)encodedDataWithPropertyListObject:(id)arg1;
+ (id)encodedDataWithPropertyListObject:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
+ (id)filterPropertyList:(id)arg1;
+ (id)filterPropertyList:(id)arg1 block:(id /* block */)arg2;
+ (id)filterPropertyListNoData:(id)arg1;
+ (id)mutableArrayFromEncodedData:(id)arg1;
+ (id)mutableDictionaryFromEncodedData:(id)arg1;
+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3;
+ (id)propertyListObjectFromEncodedData:(id)arg1 expectedClass:(Class)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
