//
//  MasterViewController.h
//  Scout
//
//  Created by Mecolab PUC on 4/4/14.
//  Copyright (c) 2014 Asociación de Guías y Scouts de Chile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HelloWorld.h"

@interface MasterViewController : UITableViewController {
    IBOutlet UILabel *display;
    HelloWorld *brain;
}

- (IBAction)digitPressed:(UIButton *)sender;
- (IBAction)operationPressed:(UIButton *)sender;

@end
