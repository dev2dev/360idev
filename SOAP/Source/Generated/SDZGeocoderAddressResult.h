/*
	SDZGeocoderAddressResult.h
	The interface definition of properties and methods for the SDZGeocoderAddressResult object.
	Generated by SudzC.com
*/

#import "Soap.h";
	

@interface SDZGeocoderAddressResult : SoapObject
{
	int _number;
	int _zip;
	NSString* _suffix;
	NSString* _prefix;
	NSString* _type;
	NSString* _street;
	NSString* _state;
	NSString* _city;
	float _lat;
	float _longitude;
	
}
		
	@property int number;
	@property int zip;
	@property (retain, nonatomic) NSString* suffix;
	@property (retain, nonatomic) NSString* prefix;
	@property (retain, nonatomic) NSString* type;
	@property (retain, nonatomic) NSString* street;
	@property (retain, nonatomic) NSString* state;
	@property (retain, nonatomic) NSString* city;
	@property float lat;
	@property float longitude;

	+ (SDZGeocoderAddressResult*) newWithNode: (CXMLNode*) node;
	- (id) initWithNode: (CXMLNode*) node;
	- (NSMutableString*) serialize;
	- (NSMutableString*) serialize: (NSString*) nodeName;
	- (NSMutableString*) serializeAttributes;
	- (NSMutableString*) serializeElements;

@end