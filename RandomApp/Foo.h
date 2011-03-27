//
//  Foo.h
//  RandomApp
//
//  Created by Nicholas Cancelliere on 3/27/11.
//  Copyright 2011 Ozmox.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Foo : NSObject {
// attributes
    IBOutlet NSTextField *textField;
}
// methods
- (IBAction)seed:(id)sender;
- (IBAction)generate:(id)sender;

@end
