--TEST--
inject urlprefix
--SKIPIF--
<?php
include(__DIR__.'/skipif.inc');
file_put_contents('/tmp/openrasp/assets/inject.html', "inject content");
?>
--INI--
openrasp.root_dir=/tmp/openrasp
openrasp.inject_urlprefix=/prefix
--ENV--
return <<<END
REQUEST_URI=/prefix/index.php
END;
--FILE--
<?php
header('Content-type: text/html;charset=UTF-8', true, 200);
unlink('/tmp/openrasp/assets/inject.html');
?>
ok
--EXPECTHEADERS--
Content-type: text/html;charset=UTF-8
--EXPECT--
ok
inject content